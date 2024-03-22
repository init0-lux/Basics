enum Foo{
    _Bar,
    _Baz,
    Qux(i32),
}

fn main(){
    let a: Foo = Foo::Qux(10);

    // the following codeblock is long and wordy
    if let Foo::_Bar = a{
        println!("match foo::_Bar");
    } else if let Foo::_Baz = a{
        println!("match foo::_Baz");
    } else{ 
        println!("match others");
    }

    // this can be replaced by a match statement, and looks cleaner
    match a{
        Foo::_Bar => println!("matched foo::bar"),
        Foo::_Baz => println!("matched foo::_Baz"),
        _ => println!("matched others"),
    };
}
