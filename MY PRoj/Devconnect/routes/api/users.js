const express = require('express');
const router = express.Router();
const gravatar = require('gravatar');
const bcrypt =   require('bcryptjs');
const jwt = require('jsonwebtoken');
const keys = require('../../config/keys');
const passport = require('passport');

// Load input validation
const validateRegisterInput = require('../../validation/register');
const validateLoginInput = require('../../validation/login');



// LOad user model 
const User = require('../../models/User');

//@route GET api.users/test
//@desc TESTS users route
//@access Public

router.get('/test' , (req , res) => res.json({msg : 'Users Works'}));


//@route GET api.users/register
//@desc register user
//@access Public

router.post('/register' , (req , res) => {

    const { errors , isvalid } = validateRegisterInput(req.body);
    //check valdation
    if(!isvalid){
        return res.status(400).json(errors);
    }

    User.findOne({  email : req.body.email })
        .then(user => {
            if(user){
                errors.email = 'email already exists';
                return res.status(400).json(errors);
            }
            else{

                const avatar = gravatar.url(req.body.email ,{
                    s: '200' , //size
                    r: 'pg' , //rating
                    d : 'mm' //default
                });


                const newuser = new User({
                    name : req.body.name,
                    email : req.body.email,
                    avatar, 
                    password : req.body.password,
                });

                bcrypt.genSalt( 10, (err, salt) =>{
                    bcrypt.hash(newuser.password , salt , (err , hash) =>{
                        if(err) throw err;
                        newuser.password = hash;
                        newuser
                            .save()
                            .then(user => res.json(user))
                            .catch(err => console.log(err));
                    })
                })
            }
        })
});


//@route Get api/users/login
//@desc to login / return jwt token
//@acess public

router.post('/login' , (req , res) => {

    const { errors , isvalid } = validateLoginInput(req.body);
    //check valdation
    if(!isvalid){
        return res.status(400).json(errors);
    }


    const email = req.body.email;
    const password = req.body.password;


    //Find user by email
    User.findOne({email})
        .then( user => {
            //check for user
            if(!user){
                errors.email = 'User not found';
                return res.status(404).json(errors);
            }
            //check password
            bcrypt.compare(password , user.password)
                .then(isMatch => {
                    if(isMatch){
                        //user matched
                        const payload = { id : user.id , name : user.name , avatar : user.avatar }

                        //jwt sigh
                        jwt.sign(payload , 
                            keys.secretorkey , 
                            { expiresIn : 3600} , 
                            (err , token) =>{
                                res.json({
                                    success : true ,
                                    token : 'Bearer ' + token
                                });
                        });
                    }
                    else{
                        errors.password = 'Password incorect';
                        return res.status(400).json(errors);
                    }
                })
        });
});

//@route GET api.users/current
//@desc Returns current user
//@access Private

router.get('/current' , 
passport.authenticate('jwt' , {session: false }), 
(req , res)=>{
    res.json({
        id : req.user.id,
        name : req.user.name,
        email : req.user.email
    });
       
});


module.exports = router;