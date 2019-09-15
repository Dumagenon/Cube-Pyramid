void mx_printchar(char c);

void mx_pyramid(int n) {
	int out_x = n * 2 - 3, // Нижние подчеркивания "_"
		out_y = n / 2, // Боковой треугольник "\" b "|"
		slan = n, // Косая переднего треугольника
		i, j, m, k;
// Проверка на правильность введенного числа
	if(n <= 1 || n % 2 != 0) return;

// Block 1
	for (i = 0; i < out_y; i++) {
		for (j = 0; j < slan - i - 1; j++) mx_printchar(' ');
		mx_printchar('/');
		for (k = 0;k < i; k++) {
			mx_printchar(' ');
			if(k > 0)  {
				mx_printchar(' ');
			}
		}
		mx_printchar('\\');
		for (m = 0; m < i; m++) 
			mx_printchar(' ');
		if (i > 0) mx_printchar('\\');
		mx_printchar('\n');
	}
// Block 2
	for (i = 0; i < out_y - 1; i++) {
		for (j = 0; j < out_y - i - 1; j++) mx_printchar(' ');
		mx_printchar('/');
		for (m = 0; m < (i + out_y) * 2 - 1; m++) mx_printchar(' ');
		mx_printchar('\\');
			for (k = 0; k < out_y - i - 1; k++) mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
	}

// Block 3
	mx_printchar('/');
	for (i = 0; i < out_x; i++)
		mx_printchar('_');
	mx_printchar('\\');
	mx_printchar('|');
	mx_printchar('\n');
}
