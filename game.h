#pragma once
#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define INVENTORY_SIZE 10
#define DROP_RATE 0.5

//extern int player_hp;
//extern int player_att;
//extern int player_def;

//extern int monster_hp;
//extern int monster_att;
//extern int monster_def;

void print_status(int, int, int, short[], int, int, int);
void respawn_monster(int*);
void print_inventory(short[]);
short get_item();
void put_item(short[], short);
int find_empty_slot(short[]);
int print_menu();
int calculate_damage(int, int, int);
void attack(int*, int, int, int*, int, int);
void defense(int*, int, int, int*, int, int);
void init_game(int*, int*, int*, short[], long*, int*, int*, int*);
void run_game(int*, int*, int*, short[], long*, int*, int*, int*);

#endif