all:
	arm-none-linux-gnueabihf-gcc main.c sdcard_util.c -lpthread -o sdcard_manager

clean:
	rm -rf sdcard_manager