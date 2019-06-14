#ifndef DATASTRUCT
#define DATASTRUCT

#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <map>
#include <string>
#include <limits.h>
using namespace std;

class Net;
class Node {
	public:
		string name;
		vector<Net *> connected_Nets;
		int ov_index;
};

class Net {
	public:
		Net(){};
		Net(Node *a, Node *b, bool f) {
			v1 = a;
			v2 = b;
			fake = f;
			flag = false;
		};
		Node *v1, *v2;
		bool flag, fake;
};

#endif
