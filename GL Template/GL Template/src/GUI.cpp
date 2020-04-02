#include "GUI.h"

GUI::GUI() {
	init();
}
GUI::~GUI() {

}
void GUI::init()
{
	ImGui_ImplGlut_Init();
}

void GUI::render()
{
	ImGui_ImplGlut_NewFrame();
	ImGui::Begin("Console");
	ImGui::Text("Use wasd and qe to move, press m to use your mouse");


	ImGui::End();
	ImGui::Render();
}
