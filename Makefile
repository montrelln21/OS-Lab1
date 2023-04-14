# list/Makefile
#
# Makefile for list implementation and test file.
#
# montrell.nelson01@gmail.com
# < MonTrell Nelson >


list: main.c
		gcc -o main main.c list.c
clean:
		rm main
