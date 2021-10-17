#define _CRT_SECURE_NO_WARNINGS
#include <bangtal>
using namespace bangtal;

ScenePtr Lobby_Scene;
ScenePtr Piano_Scene;
SoundPtr Lobby_Music;
ObjectPtr Tile[8];
SoundPtr Note[8];
bool Note1_index = false;
bool Note2_index = false;
bool Note3_index = false;
bool Note4_index = false;
bool Note5_index = false;
bool Note6_index = false;
bool Note7_index = false;
bool Note8_index = false;
bool Note_Flow = 0;
int Stage_index = 1;

//�ǹ� ��ü�� X��ǥ�� �����ϴ� �Լ��Դϴ�.
int index_X(int i) {
	return 134 + 63 * i;
}

//�ǾƳ� �ǹ� ��ü�� �����ϰ� ����� �ε����� �ִ� �Լ��Դϴ�(�� ~ ���� ��/1 ~ 8).
//for���� �̿��ؼ� �����ϰ� ������� ������ play�Լ����� for���� ������ i���� �̻��ϰ� �ٲ�� ���ܰ� �߻��� �ε����ϰ� ������ �Ҵ��ϴ� ������� ��������ϴ�.
void Note_Set() {
	Tile[0] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(0), 10);
	Tile[0]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[0] = Sound::create("Sounds/1.mp3");
		Note[0]->play();
		Note1_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});


	Tile[1] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(1), 10);
	Tile[1]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[1] = Sound::create("Sounds/2.mp3");
		Note[1]->play();

		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[2] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(2), 10);
	Tile[2]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[2] = Sound::create("Sounds/3.mp3");
		Note[2]->play();

		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[3] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(3), 10);
	Tile[3]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[3] = Sound::create("Sounds/4.mp3");
		Note[3]->play();
		Note4_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[4] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(4), 10);
	Tile[4]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[4] = Sound::create("Sounds/5.mp3");
		Note[4]->play();
		Note5_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[5] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(5), 10);
	Tile[5]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[5] = Sound::create("Sounds/6.mp3");
		Note[5]->play();
		Note6_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[6] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(6), 10);
	Tile[6]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[6] = Sound::create("Sounds/7.mp3");
		Note[6]->play();
		Note7_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

	Tile[7] = Object::create("Images/Ÿ��.png", Piano_Scene, index_X(7), 10);
	Tile[7]->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Note[7] = Sound::create("Sounds/8.mp3");
		Note[7]->play();
		Note8_index = true;
		switch (Stage_index) {
		case 1:
			if (stage1_check() == 1) {
				Stage_index++;
				showMessage("1�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		case 2:
			if (stage2_check() == 2) {
				showMessage("2�ܰ� Ŭ����");
				Lobby_Scene->enter();
				Lobby_Music->play();
				break;
			}
		default: break;
		}
		return 1;
	});

}

int stage1_check() {

	if (Note_Flow == 0 && Note3_index == true) { Note3_index = false; Note_Flow++; }


	if (Note_Flow == 1 && Note2_index == true) { Note2_index = false; Note_Flow++; }


	if (Note_Flow == 3 && Note1_index == true) { Note_Flow = 0; return 1; }


}

int stage2_check() {

	if (Note_Flow == 0 && Note1_index == true) { Note1_index = false; Note_Flow++; }


	if (Note_Flow == 1 && Note3_index == true) { Note3_index = false; Note_Flow++; }


	if (Note_Flow == 2 && Note5_index == true) { Note5_index = false; Note_Flow++; }


	if (Note_Flow == 3 && Note8_index == true) { Note_Flow = 0; return 1; }

}



void stage2() {
	if (Note3_index == 1) {
		Note3_index = 0;
		if (Note2_index == 1) {
			Note2_index = 0;
			showMessage("Ŭ����");
		}
	}
}

void _init() {
	Lobby_Scene = Scene::create("��", "Images/��.png");
	Piano_Scene = Scene::create("�ǾƳ�", "Images/�ǾƳ�ǹ�.png");
	Lobby_Music = Sound::create("Sounds/IlliyardMoor.mp3");
	Lobby_Music->play();

	auto Piano = Object::create("Images/�ǾƳ�.png", Lobby_Scene, 302, 408);
	Piano->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Piano_Scene->enter();
		Lobby_Music->stop();

		Note_Set();
		switch (Stage_index) {
		case 1:
			showMessage("�̷�����");
			break;
		
		case 2:
			showMessage("���ֵ̼�");
			break;
		}
		return 0;

		});



	startGame(Lobby_Scene);
}

int main() {

	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);


	_init();

	return 0;

}

