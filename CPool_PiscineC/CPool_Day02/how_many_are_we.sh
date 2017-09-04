if [$(echo $1) = ""]
then
	wc -l
else
	grep -i $(echo $1) | wc -l
fi
