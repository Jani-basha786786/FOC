#!/bin/bash
echo "Enter a string"
read a
if [ $a == 'a','e','i','o','u','A','E','I','O','U' ]
then
echo $a "is a vowel"
else
echo $a "is a consonant"
fi
