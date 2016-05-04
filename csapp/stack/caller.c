int caller()
{
	int arg1 = 543;
	int arg2 = 1057;

	int sum = swap_add(&arg1, &arg2);
	int diff = arg1 -arg2;

	return diff * sum;

}
