# Zenit'OS
![20240820_215259](https://github.com/user-attachments/assets/6e745cfb-7acc-4d4c-9bae-7212377a80ca)
es un sistema operativo x86-32bit unix-like básico y experimental diseñado para aprender sobre la programación de sistemas y el desarrollo de sistemas operativos. Este proyecto es un punto de partida ideal para explorar los conceptos fundamentales en la creación de un sistema operativo.
# Ejecutar 
Puedes descargar la iso [Archivo Iso](https://github.com/CipherGo/KernixOS/releases/download/kernixOS/kernixOS.iso) cuando inicie, puedes ejecutar: doom & lua, en una ventana de terminal.

para correr kernixOS en qemu, ejecuta:
```
qemu-system-i386 -cdrom kernixOS.iso
```
# VirtualBox & Vmware 
inician como si fuera un sistema operativo normal.

# Construir 
Para construir el Kernel, solo ejecute:
```
make
```

Esto compilara solo el kernel (kernel.bin).

La compilación de binarios del espacio de usuario se documentará después.

# Contribuir
Si te interesa contribuir al desarrollo de KernixOS, sigue estos pasos: Haz un fork del repositorio.Crea una nueva rama para tu característica o corrección de errores. Realiza tus cambios y haz commit.Envía un pull request con una descripción clara de tus cambios. 
# Licencia 
Este proyecto está bajo la Licencia GPL. Consulta el archivo LICENSE para obtener más detalles.Nota: Este proyecto está en fase de desarrollo y es principalmente para fines educativos. No está destinado para su uso en producción.
