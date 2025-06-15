
#include <iostream>
#include <string>
#include <vector>

#include "APIImpl.hpp"

int main(int argc, char* argv[]) {
    APIImpl api;
    std::vector<int> inputs = {-1, 0, 1, 2, 100};
    for (const auto& iter : inputs) {
        std::cout << "Input: " << iter << std::endl;
        std::shared_ptr<Status> status = api.GetResponse(iter);
        status->Print();
        std::cout << std::to_string(status->GetStatus()) << std::endl;
    }
    return 0;
}