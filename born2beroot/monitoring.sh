#! /bin/bash
wall $'#Architecture: ' `uname -a` \
	$'\n#CPU Physical:' `cat /proc/cpuinfo | grep processor | wc -l` \
	$'\n#vCPU:' `awk -F: '/^physical id/ {ph=$NF} /^core id/ && a[ph,$NF]++==0' /proc/cpuinfo | wc -l` \
	$'\n'`free -m | awk 'NR==2{printf "#Memory Usage: %s/%sMB (%.2f%%)", $3, $2, $3*100/$2 }'` \
	$'\n'`df -h | awk '$NF=="/"{printf "#Disk Usage: %d/%dGB (%s)", $3, $2, $5}'` \
	$'\n'`top -bn1 | grep load | awk '{printf "#CPU Load: %.2f", $(NF-2)}'` \
	$'\n#Last Boot: ' `who -b | awk '{print $3" "$4" "$5}'` \
	$'\n#LVM Use: ' `lsblk | grep lvm | awk '{if ($1) {print "Yes";exit;} else {print "No"}}'` \
	$'\n#Connection TCP:' `netstat -an | grep ESTABLISHED | wc -l` \
	$'\n#User Log: ' `who | cut -d " " -f 1 | sort -u | wc -l` \
	$'\n#Network: IP ' `hostname -I`"("`ip a | grep link/ether | awk '{print $2}'`")" \
	$'\n#Sudo: ' `grep 'sudo ' /var/log/auth.log | wc -l`
