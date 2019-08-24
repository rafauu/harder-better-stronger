#include <utility>
#include <type_traits>

#define StrongType(Type, Name) using Name = StrongTypeImpl<Type, struct Name##Tag>

template <typename Type, typename Tag>
class StrongTypeImpl
{
public:
    constexpr explicit StrongTypeImpl(Type&& value) :
        value{std::forward<decltype(value)>(value)}
    {}

    decltype(auto) get() const
    {
	return value;
    }

private:
    Type value;
};
