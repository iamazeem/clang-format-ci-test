#include <iostream>
#include <cstdlib>

// --- test class ---

namespace test {

    class Test final {
    public:
    Test(const std::string id) noexcept;
    ~Test() noexcept;

private:
    std::string m_id{};
};
    
Test::Test(const std::string id) noexcept
:
m_id{id}
{
    std::cout << m_id << ": created\n";
}
Test::~Test() noexcept { std::cout << m_id << ": destroyed\n"; }

} // test

// --- main ---

int main() {
    test::Test t{"test-id"};
    std::cout << "exiting...\n";
    return EXIT_SUCCESS;
}
