#include<iostream>
using namespace std;
//结构体：每个成员有单独内存，互不影响
struct DataS {
	int i;
	double d;
	char s[10];
};
//结构体内存对齐：
// 1.每个成员要放在自己字节数的地址上（int放4倍的地址上，short放2倍的地址上），不在对应地址上就补空格
// 2.整个结构体要补最大成员字节数的倍数
// 3.成员顺序会影响大小，大的字节数类型放前面更省
/*嵌套结构体：
* struct Inner {
    char  a;    // 1字节
    int   b;    // 4字节
};
// Inner 内部：a偏移0，b对齐数4从偏移4开始，占4格 → 已用8，补到4倍数 → sizeof(Inner)=8
// Inner 的对齐数 = max(1,4) = 4

struct Outer {
    char     x;     // 1字节
    Inner    inner; // 嵌套
    short    y;     // 2字节
};
偏移:  0    1  2  3    4  5  6  7  8  9 10 11
	 [x] [填 填 填]  [         inner          ]
					  ↑ 从偏移4开始，占8格 

- 先算内层 ：把`Inner` 自己的大小算出来（比如 8 格）
- 再算外层 ：把`Inner` 当成一个"占 8 格的大块"，它要求地址是 4 的倍数（4 = Inner 内部最大的那个成员的对齐数）
补齐看的是对齐数，不是成员大小
为什么不从8开始填？
如果 Inner 放在偏移4（4的倍数?）：
偏移:  4    5  6  7    8  9 10 11
	 [a] [填填填]  [b  b  b  b]
	  ↑偏移4    
	  所以sizeof(Outer)=16
*/

//联合体：所有成员共享内存，所有成员都从相同地址出发，修改一个成员会影响其他成员
/*联合体内存对齐：
1.大小 = 最大成员的大小（要考虑该成员自身对齐后的实际大小）
2.对齐数 = 最大成员的对齐数
3.总大小 = 对齐数的倍数（不够就补齐）
union U4 {
	char a[10];    // 10字节，对齐数=1
	int  b;        // 4字节，对齐数=4
};
大小 = max(10, 4) = 10
对齐数 = max(1, 4) = 4
10 不是 4 的倍数 → 补到 12

地址:  0  1  2  3  4  5  6  7  8  9   10 11
	 [         a/b 共用             ] [填填]

sizeof(U4) = 12
*/
 union DataU {
	int i;
	double d;
	char s[10];
};
 /*联合体定义和使用：
 * 1.定义和使用分开
 * union DataU {
	int i;
	double d;
	char s[10];
};
DataU a,b,c;
2.定义和使用结合
union DataU {
	int i;
	double d;
	char s[10];
}a,b,c;
3.匿名使用：不想让别人使用
union  {
	int i;
	double d;
	char s[10];
}a,b,c;
 */
int main() {
	DataS ds;
	cout << &ds.i << "," << &ds.d << "," << (void*)ds.s << endl;
	cout << sizeof(ds) << endl;
	DataU du;
	cout << &du.i << "," << &du.d << "," << (void*)du.s << endl;
	cout << sizeof(du) << endl;

}