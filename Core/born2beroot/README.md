lfrench's notes on born2beroot submission and defense.

Submission: mandatory AND bonus

Machine configuration:
Procs: 2
Cores: 2
RAM: 4GB
Storage: 30.8GB like bonus example

Network ports:
Host 8040 to Guest 80
host 8041 to Guest 443
Host 8042 to Guest 4242(ssh)
- sudo ufw status
- sudo systemctl status ssh | sudo service ssh status
- ss -tunlp -portchecking
- sudo ufw allow 8080; sudo ufw deny 8080; sudo ufw delete allow 8080;
- ssh lfrench@localhost -p 8042
- ssh root@localhost -p 8042 (should be denied)

OS: Debian for ease and wide support
- /etc/os-release

App protection: AppArmor
- It comes with Debian, (easy!), works like a watchdog at the kernel level, controls memory access and other low-level permissions on a per-app basis. Admins can configure apps to have higher levels of protection.
- sudo /usr/sbin/aa-status

Apt Install Aptitude
- it is

Hostname: lfrench42
- sudo hostnamectl set-hostname new_hostname; 
- sudo vim /etc/hosts (change hostname here too);
- sudo reboot;
- don't forget to set back to lfrench42;

Storage:
- lsblk
- Configured like bonus example

Sudo installed. 
- which sudo
- sudo vim /etc/sudoers
- sudo visudo
-- note requiretty
-- note path
- /var/log/sudo/sudo.log

Pam password manager:
- sudo nano /etc/pam.d/common-password
- sudo nano /etc/login.defs

User and Group management:
- sudo adduser new_username
- check password rules
- Valid password: A1s@d3f4G%
- invalid passwords:
-- aaaaa12345
-- username in password
-- abcde12345
- getent group sudo
- getent group user42
- sudo addgroup new_groupname
- sudo groupdel groupname
- sudo usermod -aG groupname username
- sudo usermod -rG groupname username
- getend group groupname
- sudo chage -I username
- sudo userdel username

Monitoring.sh
- /usr/local/bin/monitoring.sh
- runs as root to run at startup
- sudo crontab -e
- sudo cronstop
- sudo cronstart

BONUS:
- lighttpd webserver installed
-- dpkg -l | grep lighttpd
-- systemctl start lighttpd
-- systemctl enable lighttpd
- MariaDB installed
- wordpress installed at localhost:8040/wordpress
- myphpadmin installed at localhost:8040/phpmyadmin
