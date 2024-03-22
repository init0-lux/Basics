enum MyEnum{
    Foo,
    Bar
}

fn main() {
    let mut count = 0;

    // dynamically sized arrays
    let v: Vec<MyEnum> = vec![ MyEnum::Foo, MyEnum::Bar, MyEnum::Foo ];
    for e in v {
        // if conditionals don't allow matching for patterns
        // if e == MyEnum::Foo{
        //    count += 1;
        // }

        if matches!(e, MyEnum::Foo) {
            count += 1;
        }
    }

    assert!(count == 2);
    println!("Success!");
}
