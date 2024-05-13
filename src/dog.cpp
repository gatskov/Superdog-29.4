#include <iostream>
#include <string>
#include "dog.h"
#include "talent.h"
#include <vector>
#include <conio.h>

Talent *hunter = new Hunter();
Talent *guide = new Guide();
Talent *swim = new Swimming();
Talent *danc = new Dancing();
Talent *count = new Counting();
Talent *snif = new Sniffer();
Talent *x;

Dog dog;

void Dog::show_talents()
{
  dogshow("Pes", swim, guide, danc, count, snif);
  dogshow("Stive", snif, count, hunter, x, x);
  delete count;
  delete snif;
  delete danc;
  delete swim;
  delete guide;
  delete hunter;
  system("pause");
  int a;
  std::cin >> a;
  std::cin.get();
  _getch();
}

void Dog::dogshow(std::string nick, Talent *a, Talent *b, Talent *c, Talent *d, Talent *e)
{
  Talent *v[] = {a, b, c, d, e};
  std::cout << "This is <<" << nick << ">> and it has some talents:\n";
  for (auto i : v)
  {
    ability(i);
  }
  std::cout << "-------------------------------------------\n";
}
