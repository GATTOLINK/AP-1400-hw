#include "server.h"

std::vector<std::string> pending_trxs;

Server::Server() { }

std::shared_ptr<Client> Server::add_client(std::string id) {

}

std::shared_ptr<Client> Server::get_client(std::string id) {

}

double Server::get_wallet(std::string id) {

}

bool Server::parse_trx(const std::string trx, std::string sender, std::string receiver, double value) {

}

bool Server::add_pending_trx(std::string trx, std::string signature) {

}

size_t Server::mine() {

}