int main() {
	int arr[4][3] = { {1,2,3},{0,2},{1},{5,6} };
	int i = 0;
	for (i = 0; i < 4; i++) {
		int j = 0;
		for (j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
