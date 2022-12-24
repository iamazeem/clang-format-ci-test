#pragma once

#include <iostream>
#include <string>

// --- test class ---

namespace test {

class Test final
{
public:
    Test(const std::string& id) noexcept;
    ~Test() noexcept;

private:
    std::string m_id{};
};

Test::Test(const std::string& id) noexcept : m_id{id}
{
    std::cout << m_id << ": created\n";
}

Test::~Test() noexcept
{
    std::cout << m_id << ": destroyed\n";
}

}
