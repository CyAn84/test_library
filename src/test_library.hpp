#ifndef TEST_LIBRARY
#define TEST_LIBRARY


class TestMyLib
{
public:
    TestMyLib() = default;
    virtual ~TestMyLib() = default;

    auto testMethod() -> void;
};

#endif // TEST_LIBRARY