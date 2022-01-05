const app=require("./app");
const express=require("express");

const dotenv=require("dotenv");

dotenv.config({path:"backend/config/config.env"})
app.listen(process.env.PORT,()=>{
    console.log(` server is working on https://localhost:${process.env.PORT}`)
})