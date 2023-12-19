/**********************************************************************
* Functions of Main page.
*
* Yuhao Zhang. 12/19/2023
**********************************************************************/

#include "drawer.hpp"
#include "huffman.hpp"
#include "bt_builder.hpp"
#include "about.hpp"
#include "search_tree.hpp"

extern char wait_key();

bool attribute() {
	dsd::clear();
	dsd::title_display("Data Structure Display - Group 2");
	dsd::title_display("Ŀ¼");
	dsd::split();
	dsd::option('H', "�����������");
	dsd::option('B', "ǰ�������������");
	dsd::option('S', "�����������Ĺ������ѯ");
	dsd::option('A', "����");
	dsd::option('Q', "�˳�");
	dsd::split();
	printf("* ���¼�����ѡ����...\n< ");
	switch (wait_key()) {
	case 'H':
		dsd::huffman_page();
		break;
	case 'B':
		dsd::bt_build_page();
		break;
	case 'S':
		dsd::search_tree_page();
		break;
	case 'A':
		dsd::about_page();
		break;
	case 'Q':
		printf("Q | �˳�\n");
		return false;
	default:
		break;
	};
	return true;
}

int main() {
	ege::setfont(-18, 0, "Consolas");
	while (attribute());
	dsd::output("��л����ʹ�ã�");
	ege::closegraph();
}