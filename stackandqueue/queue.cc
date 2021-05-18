#include <iostream>
#include <queue>
#include <algorithm>

int main()
{
  std::string content;
  std::queue<std::string> my_queue;
  while(true) {
    
    std::cout << "Type the content to add to the queue (EXIT to finish): ";
    std::cin >> content;

    if (content  == "EXIT") {
        //print content from stack
        std::cout << "Here is the final content of the queue:" << std::endl;
        size_t stack_size = my_queue.size();
        for (size_t i = 0; i < stack_size; ++i) {
            std::cout << my_queue.front() << " ";
            my_queue.pop();
        }
        return 0;
    }
    my_queue.push(content);
  }
}