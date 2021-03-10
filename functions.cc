int setBit(int a, int b){
  b = 1 << b;
  a = a|b;
  return a;
}

int clearBit(int a, int b){
  b = ~(1 << b);
  a = a & b;
  return a;
}

int flip(int a, int b){
  b = 1 << b;
  a = a ^ b;
  return a;
}

int replaceBits(int a, int b, int c){
  a = a & b;
  a = a | c;
  return a;
}

int buildColor(int a, int b, int c){
  a = a << 16;
  b = b << 8;
  a = a | b;
  a = a | c;
  return a;
}
