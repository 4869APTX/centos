#!/bin/sh 
myfile=/var/log/cron
dateline=`echo | awk '/Mar 16 06:00/{n=NR}END{print n}' $myfile`
countline=`echo | awk 'END{print NR}' $myfile`
let startline='dateline + 1'
sed -i $startline','$countline'd' $myfile
