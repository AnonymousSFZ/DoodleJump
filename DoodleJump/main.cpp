#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include "doodleJump.h"

PIMAGE scene;

void mainloop()
{
	welcomePage();
	initScene();
	for ( ; is_run(); delay_fps(60) )
	{
		cleardevice();

        putimage(0, 0, scene);
        initBrick();
        initPlayer();

        updateScene();
        updatePlayer();
	}
}

int main(void)
{
	setinitmode(INIT_ANIMATION);    // ����egeģʽΪ����ģʽ
	initgraph(640, 480);            // ͼ�γ�ʼ�������ڳߴ�640x480
	randomize();                    // �������ʼ���������Ҫʹ��������Ļ�
	setrendermode(RENDER_MANUAL);   // ��ͼ����ģʽ����Ϊ�ֶ���������˸

	setcaption("DoodleJump Beta");
	// ������ѭ��
	mainloop();
	// �رջ�ͼ�豸
	closegraph();
	return 0;
}
