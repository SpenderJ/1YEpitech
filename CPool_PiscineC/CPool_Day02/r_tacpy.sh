sed 1d | sed '1~2p' | cut -d ':' -f1 | rev | sort -r | rev | rev | head -n $MY_LINE2 | head -n -$MY_LINE1 | tr "\n" "=" | sed "s/=/, /g" | sed "s/, $/./g"  	
