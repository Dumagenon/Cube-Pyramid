void mx_printchar(char c);

void mx_cube(int n) {
	int out_x = n * 2,
		out_y = n,
		slan = n / 2,
		i, j, m, k;
// Проверка на правильность введенного числа
	if(n <= 1) return;

// Block 1
	for (i = 0; i <= slan; i++) mx_printchar(' ');
	mx_printchar('+');
	for (i = 0; i < out_x; i++) mx_printchar('-');
	mx_printchar('+');
	mx_printchar('\n');

// Block 2
	for (i = 0; i < slan; i++) {
		for (j = 0; j < slan - i; j++) mx_printchar(' ');
		mx_printchar('/');	
		for (m = 0; m < out_x; m++) mx_printchar(' ');
		mx_printchar('/');
		for (k = 0; k < i; k++) mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
	}

// Block 3
	mx_printchar('+');
	for (i = 0; i < out_x; i++) mx_printchar('-');
	mx_printchar('+');
	for (i = 0; i < slan; i++) mx_printchar(' ');
	mx_printchar('|');
	mx_printchar('\n');

// Block 4
	for (i = 0; i < out_y - slan - 1; i++) {
		mx_printchar('|');
		for (j = 0; j < out_x; j++) mx_printchar(' ');	
		mx_printchar('|');
		for (m = 0; m < slan; m++) mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
	}
// Block 5
	mx_printchar('|');
	for (i = 0; i < out_x; i++)
		mx_printchar(' ');
	mx_printchar('|');
	for (i = 0; i < slan; i++)
		mx_printchar(' ');
	mx_printchar('+');
	mx_printchar('\n');

// Block 6
	for (i = 0; i < out_y - slan - 1; i++) {
		mx_printchar('|');
		for (j = 0; j < out_x; j++)
			mx_printchar(' ');	
		mx_printchar('|');
		for (m = 0; m < slan - i - 1; m++)
			mx_printchar(' ');
		mx_printchar('/');
		mx_printchar('\n');
	}
// Block 7
	mx_printchar('+');
	for (i = 0; i < out_x; i++)
		mx_printchar('-');
	mx_printchar('+');
	mx_printchar('\n');
}
