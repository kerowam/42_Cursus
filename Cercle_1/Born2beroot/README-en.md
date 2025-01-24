<div align="center">
  <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/refs/heads/master/banners/cursus/projects/born2beroot-dark.png" />
  <img src="https://img.shields.io/badge/status-finished-darkgreen" />
  <img src="https://img.shields.io/badge/score-125-darkblue" /><br/> 
  <b>English</b> · <a href="README.md">Español</a>
</div> 

---

# Introduction

**Born2beRoot** is a 42 School curriculum project that introduces fundamental concepts of system administration. The main goal is to set up a secure and functional virtual server using Debian or CentOS, while respecting strict security requirements.

This is the [subject](es.subject.pdf) of the project.

---

## 📋 Table of Contents

- 📖 [Description](#description)
- ⚙️ [Requirements](#requirements)
- 🛠️ [Installation](#installation)
- 🔒 [Security Settings](#security-settings)
- 🧩 [Tools Used](#tools-used)
- ✅ [Tests](#tests)
- 🌐 [Resources](#resources)

---

## 📖 Description

In this project, you are asked to set up a virtual server from scratch using **VirtualBox** or **UTM** and an operating system image (Debian or CentOS). The server must be properly configured to meet the requirements defined in the subject, including:

- User configuration.
- Password management and security policies.
- Configuration of essential services such as SSH.
- Use of **UFW** or **FirewallD** to manage firewall rules.
- Configuration of partitions and use of the log system.

This project seeks to improve your skills in system administration, server management, and basic security.

---

## ⚙️ Requirements

### Operating System:
- **Debian** (preferred) or **CentOS**.

### Required Software:
- **VirtualBox** or **UTM** for virtualization.
- **SSH** for remote access.
- **UFW** or **FirewallD** to manage firewall rules.

### Security Policies:
- Strong passwords for users.
- Configuration of disk partitions.
- Log management using **rsyslog** or equivalent.

---

## 🛠️ Installation

1. **Install the Operating System:**
- Download the Debian or CentOS ISO image.
- Set up a virtual machine with at least:
- 1 CPU
- 1024 MB RAM
- 8 GB storage.

2. **Basic Setup:**
- Install updates with:
```bash
sudo apt update && sudo apt upgrade -y
```
*(or `yum update -y` on CentOS).*

3. **Enable and Configure SSH:**
- Enable SSH service for remote access:
```bash
sudo systemctl enable ssh
sudo systemctl start ssh
```
- Change the default port in the configuration file:
```bash
sudo nano /etc/ssh/sshd_config
```
*(Restart SSH after saving).*

4. **Configure Firewall:**
- On Debian:
```bash
sudo ufw allow <ssh_port>
sudo ufw enable
```
- On CentOS:
```bash
sudo firewall-cmd --permanent --add-port=<ssh_port>/tcp
sudo firewall-cmd --reload
```

---

## 🔒 Security Settings

### Password Policies:
- Set the password policy in `/etc/login.defs` or `/etc/pam.d/common-password`.
- Make sure passwords expire after a certain number of days:
```bash
sudo chage -M 90 <user>
```

### Log Configuration:
- Set `rsyslog` to store and rotate system logs.
- Make sure log files have restrictive permissions:
```bash
sudo chmod 640 /var/log/*
```

### Partition Configuration:
- Divide the disk into at least the following partitions:
- `/`
- `/home`
- `/var`
- `/tmp`

---

## 🧩 Tools Used

- **VirtualBox** / **UTM** for virtualization.
- **Debian** or **CentOS** as operating system.
- **UFW** / **FirewallD** for firewall configuration.
- **rsyslog** for log management.

---

## ✅ Tests

To validate your configuration, make sure you meet the following points:

- The server must boot without errors.
- SSH access must work correctly on the configured port.
- Password policies must be effective (minimum length, expiration, etc.).
- The firewall must block all ports except those explicitly allowed.
- Logs must be enabled and configured correctly.

---

## 🌐 Resources

- [Official Debian Guide](https://www.debian.org/doc/)
- [VirtualBox Guide](https://www.virtualbox.org/manual/)
- [UFW Documentation](https://help.ubuntu.com/community/UFW)
- [rsyslog Documentation](https://www.rsyslog.com/doc/)
