#!/bin/bash

option="${1}"

help_menu(){
	printf "\033[36mServer Wrapper\033[0m\n"
	printf "\033[35mStart Server\033[0m\t\033[33m[ -start, --start ]\033[0m\n"
	printf "\033[35mStop Server\033[0m\t\033[33m[ -stop, --stop ]\033[0m\n"
	}

case $option in
	-start|--start) nohup php -S 80.208.225.117:8080 1> /dev/null & ;;
	-stop|--stop) killall -9 php;;
	-h|-help|--help) help_menu;;
	*) printf "\033[35mErr:\033[0m\t\033[31mMissing or invalid parameter was entered!\033[0m\n";;
esac
