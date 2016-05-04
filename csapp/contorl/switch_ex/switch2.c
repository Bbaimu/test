int switcher(int a, int b, int c)
{
	int answer;

	switch( a )
	{
		case 5:
			c = b ^ 15;
			/* Fall through*/
		case 0:
			answer = c + 12;
			break;
		case 2:
		case 7:
			answer = (b + c) << 2;
			break;
		case 4:
			answer = a;
		default:
			answer = b;
	}

	return answer;
}
