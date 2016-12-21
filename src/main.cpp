#include <opencv2/opencv.hpp>
#include "Munkres.h"

int main() {

	int data[3][4] = { 400, 150, 400, 1, \
					400, 450, 600, 2, \
					300, 225, 300, 3};

	cv::Mat cost(3, 4, CV_32SC1, data);
	std::cout << "cost matrix\n" << cost << "\n\n";
	Munkres m;
	std::vector<std::pair<int, int>> res = m.compute(cost);
	int total_cost = 0;
	for (int i = 0; i < res.size(); i++) {
		std::pair<int, int> p = res[i];
		int r = p.first;
		int c = p.second;
		int x = data[r][c];
		total_cost += x;
		printf("(%d, %d) -> %d\n", r, c, x);
	}
	printf("lowest cost = %d\n\n", total_cost);

	return 0;
}
