@echo
set PATH="C:\aiz\release\bin";"C:\Program Files (x86)\IrfanView";

tablica_jpg.exe

dot.exe -Tjpg tablica.gv > tablica.jpg
start i_view32.exe tablica.jpg