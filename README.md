# CPP2 Assignments

## Environment Setup

### Vagrant
#### Install
- install Vagrant from [link](https://developer.hashicorp.com/vagrant/docs/installation)

- make sure you have a CPU that allows virtualization
  - Enable Virtualization [link](https://support.microsoft.com/en-us/windows/enable-virtualization-on-windows-c5578302-6e43-4b4b-a449-8ced115f58e1)

### Virtualbox
#### Install 
- install Virtualbox for your system
  - [link](https://www.virtualbox.org/wiki/Downloads)
  
  - note if you are on windows you can use [hyper-v](https://learn.microsoft.com/en-us/windows-server/virtualization/hyper-v/hyper-v-overview?pivots=windows-server) instead of the virtualbox hypervisor, but it is integrated into windows to the extent that if the VM crashes, it will also crash the host (your computer)

  - note for Mac Silicone users: you have to jump through some hoops. You can either switch out the base box (ubuntu 22.04) with an ARM version or use the `qemu` provider to run under virtualization AND emulation
  
  - if you are running linux i assume you can setup `libvrt` on your own

### Visual Studio Code
#### Install
- download [link](https://code.visualstudio.com/download)

#### Plugins
- remote development plugin [link](https://code.visualstudio.com/docs/remote/remote-overview)

- c++ tools [link](https://code.visualstudio.com/docs/languages/cpp)

### Git
#### Install

- install git bash for your platform [link](https://git-scm.com/downloads)

## Spinning Up

open a [windows terminal](https://github.com/microsoft/terminal)/powershell/cmd/git bash window and navigate to your project

``` shell
cd ~/{path to your project}
```

spin up vagrant

``` shell
vagrant up
```

if you are using virtualbox for a provider you have to pass that in

``` shell
vagrant up --provider virtualbox
```

