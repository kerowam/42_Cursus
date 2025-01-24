<div align="center">
  <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/refs/heads/master/banners/cursus/projects/born2beroot-dark.png" />
  <img src="https://img.shields.io/badge/status-finished-darkgreen" />
  <img src="https://img.shields.io/badge/score-125-darkblue" /><br/> 
   <a href="/README-en.md">English<a> · <b>Español</b>
</div> 

---

# Introducción

**Born2beRoot** es un proyecto del currículo de 42 School que introduce conceptos fundamentales sobre administración de sistemas. El objetivo principal es configurar un servidor virtual seguro y funcional utilizando Debian o CentOS, mientras se respetan estrictos requisitos de seguridad.

Este es el [subject](es.subject.pdf) del proyecto. 

---

## 📋 Tabla de Contenidos

- 📖 [Descripción](#descripción)
- ⚙️ [Requisitos](#requisitos)
- 🛠️ [Instalación](#instalación)
- 🔒 [Configuraciones de Seguridad](#configuraciones-de-seguridad)
- 🧩 [Herramientas Utilizadas](#herramientas-utilizadas)
- ✅ [Tests](#tests)
- 🌐 [Recursos](#recursos)

---

## 📖 Descripción

En este proyecto, se te pide que configures un servidor virtual desde cero utilizando **VirtualBox** o **UTM** y una imagen de sistema operativo (Debian o CentOS). El servidor debe estar correctamente configurado para cumplir con los requisitos definidos en el subject, incluyendo:

- Configuración de usuarios.
- Gestión de contraseñas y políticas de seguridad.
- Configuración de servicios esenciales como SSH.
- Uso de **UFW** o **FirewallD** para gestionar las reglas del firewall.
- Configuración de particiones y uso del sistema de logs.

Este proyecto busca mejorar tus habilidades en administración de sistemas, gestión de servidores y seguridad básica.

---

## ⚙️ Requisitos

### Sistema Operativo:
- **Debian** (preferido) o **CentOS**.

### Software Necesario:
- **VirtualBox** o **UTM** para virtualización.
- **SSH** para acceso remoto.
- **UFW** o **FirewallD** para gestionar reglas de firewall.

### Políticas de Seguridad:
- Contraseñas seguras para los usuarios.
- Configuración de particiones de disco.
- Gestión de logs mediante **rsyslog** o equivalente.

---

## 🛠️ Instalación

1. **Instalar el Sistema Operativo:**
   - Descarga la imagen ISO de Debian o CentOS.
   - Configura una máquina virtual con al menos:
     - 1 CPU
     - 1024 MB de RAM
     - 8 GB de almacenamiento.

2. **Configuración Básica:**
   - Instala las actualizaciones con:
     ```bash
     sudo apt update && sudo apt upgrade -y
     ```
     *(o `yum update -y` en CentOS).*

3. **Habilitar y Configurar el SSH:**
   - Activa el servicio SSH para acceso remoto:
     ```bash
     sudo systemctl enable ssh
     sudo systemctl start ssh
     ```
   - Cambia el puerto por defecto en el archivo de configuración:
     ```bash
     sudo nano /etc/ssh/sshd_config
     ```
     *(Reinicia SSH después de guardar).*

4. **Configurar Firewall:**
   - En Debian:
     ```bash
     sudo ufw allow <puerto_ssh>
     sudo ufw enable
     ```
   - En CentOS:
     ```bash
     sudo firewall-cmd --permanent --add-port=<puerto_ssh>/tcp
     sudo firewall-cmd --reload
     ```

---

## 🔒 Configuraciones de Seguridad

### Políticas de Contraseñas:
- Configura la política de contraseñas en `/etc/login.defs` o `/etc/pam.d/common-password`.
- Asegúrate de que las contraseñas expiren después de un cierto número de días:
  ```bash
  sudo chage -M 90 <usuario>
  ```

### Configuración de Logs:
- Configura `rsyslog` para almacenar y rotar los logs del sistema.
- Asegúrate de que los archivos de log tengan permisos restrictivos:
  ```bash
  sudo chmod 640 /var/log/*
  ```

### Configuración de Particiones:
- Divide el disco en al menos las siguientes particiones:
  - `/`
  - `/home`
  - `/var`
  - `/tmp`

---

## 🧩 Herramientas Utilizadas

- **VirtualBox** / **UTM** para virtualización.
- **Debian** o **CentOS** como sistema operativo.
- **UFW** / **FirewallD** para la configuración del firewall.
- **rsyslog** para la gestión de logs.

---

## ✅ Tests

Para validar tu configuración, asegúrate de cumplir los siguientes puntos:

- El servidor debe arrancar sin errores.
- El acceso SSH debe funcionar correctamente en el puerto configurado.
- Las políticas de contraseña deben ser efectivas (longitud mínima, expiración, etc.).
- El firewall debe bloquear todos los puertos excepto los permitidos explícitamente.
- Los logs deben estar activos y configurados correctamente.

---

## 🌐 Recursos

- [Guía oficial de Debian](https://www.debian.org/doc/)
- [Guía de VirtualBox](https://www.virtualbox.org/manual/)
- [Documentación de UFW](https://help.ubuntu.com/community/UFW)
- [Documentación de rsyslog](https://www.rsyslog.com/doc/)

