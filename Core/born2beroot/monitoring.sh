#! /bin/bash
arch=$(uname -a)
cpu_physical=$(cat /proc/cpuinfo | grep "physical id" | wc -l)
vcpu=$(cat /proc/cpuinfo | grep "processor" | wc -l)
last_boot=$(who -b | awk '{print $3" "$4" "$5}')
mem_use=$(free -m | awk 'NR==2{printf "%sMB/%sMB (%.2f%%)", $3, $2, $3*100/$2 }')
disk_total=$(df -Bg | grep LVMGroup | awk '{td += $2} END {print td}')
disk_used=$(df -Bg | grep LVMGroup | awk '{ud += $3} END {print ud}')
disk_perc=$(df -Bg | grep LVMGroup | awk '{ud += $3} {td += $2} END {printf("%d%%", ud/td * 100)}')
cpu_load=$(top -bn1 | grep load | awk '{printf "%.2f%%", $(NF-2)}')
lvm_use=$(lsblk | grep lvm | awk '{if ($1) {print "Yes";exit;} else {print "No"}}')
connect_tcp=$(netstat -an | grep ESTABLISHED | wc -l)
user_log=$(who | cut -d " " -f 1 | sort -u | wc -l)
net_ip=$(hostname -I | tr -d ' ') 
net_mac=$(ip a | grep link/ether | awk '{print $2}' | tr -d ' ')
sudo_log=$(grep COMMAND /var/log/sudo/sudo.log | wc -l)
wall "#Architecture: $arch
#CPU Physical: $cpu_physical
#vCPU: $vcpu
#Memory Use: $mem_use
#Disk Use: ${disk_used}/${disk_total}GB (${disk_perc} used)
#CPU Use: $cpu_load
#Last Boot: $last_boot
#LVM Use: $lvm_use
#Connection TCP: $connect_tcp
#User Log: $user_log
#Network: IP $net_ip ($net_mac)
#Sudo: $sudo_log"
