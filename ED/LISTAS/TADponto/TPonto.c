#include "TPonto.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
};
struct ponto *TPonto_create(float x, float y) {
  struct ponto *novo_ponto = malloc(sizeof(struct ponto));
  if (novo_ponto != NULL) {
    novo_ponto->x = x;
    novo_ponto->y = y;
  }
  return novo_ponto;
};

void TPonto_print(struct ponto *ponto) {
  printf("(%.2f, %.2f)", ponto->x, ponto->y);
}

float TPonto_dist(TPonto *p1, TPonto *p2) {
  float diff_x = p1->x - p2->x;
  float diff_y = p1->y - p2->y;
  float power2_x = diff_x * diff_x;
  float power2_y = diff_y * diff_y;
  return sqrtf(power2_x + power2_y);
}

void TPonto_set(TPonto *ponto, float x, float y) {
  ponto->x = x;
  ponto->y = y;
}