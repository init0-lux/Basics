#! /bin/bash

echo "What is your favourite number?"
echo -n "\$ "
read Num;

case $Num in
	0) echo "0, Of course, it's Zero. The only correct answer"
		echo "I love you. The President loves you. Everyone loves you"
		;;
	1) echo "Yo, That's a pretty awesome number";;
	2) echo "Gotta love Even numbers";;
	3) echo "Nope, Why does this even exist";;
	4) echo "My man Four from Divergent comes to mind";;
	5) echo "YO, Check out the OCD freak here";;
	6) echo "Got a 20 on my 6? Ha, A lil Military joke for ya";;
	7) echo "Why was 6 afraid of 7? You know the rest";;
	8) echo "Twice of twice of 2... That is COOL";;
	9) echo "Ahh, They grow up so quickly";;

	*) echo "Do you even know the numbers, bro?!";;
esac
