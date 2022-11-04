#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);

	// ������ ������ ?
	std::shared_ptr<int> sp1 = up;				// 1 error
	std::shared_ptr<int> sp2 = std::move(up);	// 2 ok	
			
	std::unique_ptr<int> up1 = sp;				// 3 error
	std::unique_ptr<int> up2 = std::move(sp);	// 4 error
}

// �Ʒ� �Լ� �� �޸� �Ҵ��� �ּҸ� ��ȯ �մϴ�.
// ��ȯ Ÿ���� ����Ʈ �����ͷ� �����Ϸ��� �մϴ�.
// shared_ptr �� �ұ�� ? unique_ptr �� �ұ�� ?
//std::shared_ptr<int> Alloc() // ������ shared_ptr�θ� ��밡���մϴ�.
std::unique_ptr<int> Alloc()	// ȣ���ڰ� ��� ������ ���ð����մϴ�.
{
	return std::make_unique<int>();
}

int main()
{
	std::shared_ptr<int> sp = Alloc();
	std::unique_ptr<int> up = Alloc();
}