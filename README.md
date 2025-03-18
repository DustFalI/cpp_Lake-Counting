# cpp_Lake-Counting
C++练习 Lake Counting

Lake Counting

题目描述：
Due to recent rains, water has pooled in various places in Farmer John's field, which is represented by a rectangle of N x M (1 <= N <= 100; 1 <= M <= 100) squares. Each square contains either water ('W') or dry land ('.'). Farmer John would like to figure out how many ponds have formed in his field. A pond is a connected set of squares with water in them, where a square is considered adjacent to all eight of its neighbors. Given a diagram of Farmer John's field, determine how many ponds he has.

输入格式：
Line 1: Two space-separated integers: N and M \* Lines 2..N+1: M characters per line representing one row of Farmer John's field. Each character is either 'W' or '.'. The characters do not have spaces between them.

输出格式：
Line 1: The number of ponds in Farmer John's field.

题意翻译：
由于近期的降雨，雨水汇集在农民约翰的田地不同的地方。我们用一个 N×M(1≤N≤100,1≤M≤100) 的网格图表示。每个网格中有水（W） 或是旱地（.）。一个网格与其周围的八个网格相连，而一组相连的网格视为一个水坑。约翰想弄清楚他的田地已经形成了多少水坑。给出约翰田地的示意图，确定当中有多少水坑。
输入第 1 行：两个空格隔开的整数：N 和 M。

第 2 行到第 N+1 行：每行 M 个字符，每个字符是 W 或 .，它们表示网格图中的一排。字符之间没有空格。

输出一行，表示水坑的数量。

思路：
广搜，遍历地图，找到“W”并且没有被标记就进入广搜：将找到的这个放入队列，八个方向遍历，找到就存入队列，直到该位置遍历完毕，出队，开始对下一个位置八方向遍历。
思路很清晰但是代码没这么简单，写了注释，去看注释把。
