#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::unordered_map<std::string, std::string> m;

	// pair �� �����ϴ� unordered_set �Դϴ�.
	// map1 ������ 
		// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("mon", "������");

	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("tue", "ȭ����"));

	// 3. emplace - ����� ����Ÿ�Կ��� ���ϴ�.
	m.emplace("wed", "������");

	// 4. [] ������ ��� - �� ����� �θ� ���˴ϴ�.
	m["thu"] = "�����";


	//------------------------
	// �ݺ��ڿ� ���ؼ�
	// => �ݺ��ڴ� "��Ҹ� ����Ű�� ������" ��Ȱ �Դϴ�.
	// => map �� ��Ҵ� pair �Դϴ�.
	auto p = m.find("wed"); // find(Ű��)

	// ����, map �� �ݺ��ڴ� "pair �� ����Ű�� ������"��� �����ϼ���
	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����

	std::cout << p->first << " : " << p->second << std::endl;

	//=======================================
	// �ٽ� : [] ������
	// => 
	std::string s = m["sun"];
	// 1. "sun" Ű���� ������ value�� ��ȯ
	// 2. "sun" Ű���� ������ 
	//    {"sun", ""} �� ���ο� �׸� �߰�

// ����, map �� Ư�� Ű���� �ִ��� �����Ҷ�
// �Ʒ� ó�� ���� ������
// => ���縸 �ϴ� ���� �ƴ϶� �׸��� �����ϴ� �� �Դϴ�.
	if (m["sat"] != "")
	{
	}

	// �Ʒ� ó�� �ؾ� �մϴ�.
	if (m.find("sat") != m.end())
	{
	}

	// C++20 ���� ���� ������ ��� �Լ��� ���ɴϴ�.
//	if (m.contains("sat")) {}

}

