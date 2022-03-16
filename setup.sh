#!/usr/bin/env bash

#this is where your zipped autograder package will go.
cd /autograder/source

#if connecting to GitHub, you need to copy the private key here.
cp id_rsa /root/.ssh
#this is the same repo with previously deployed public key. 

git clone https://github.com/Daily-Programs/A-Public-Repository

cd src