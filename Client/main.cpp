//
// Created by daniknik on 14.12.18.
//

#include "simple_cmd_client.h"

int main(int argc, char *argv[]) {
//  if (argc != 3) {
//    std::cerr << "usage: " << argv[0] << " host port" << std::endl;
//    return 0;
//  }
  try {
//    std::string host(argv[1]);
//    int port = std::stoi(argv[2]);
    Client client ;
    client.start();
  }
  catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
