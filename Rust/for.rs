fn main(){
    for n in 1..=100{ // goes from 1 to 100 instead of 1 to 99
        if n == 100{
            println!("This runs.");
        }
        if n == 101{
            panic!("this won't run");
        }
    }

    let names: [String; 2] = [String::from("First"), String::from("Second")];
    
    // ownership is passed to names if & is not used
    for name in &names{
        // println automatically dereferences the passed value
        println!("{} is printed", name);
    }
    println!("\n{:?}\n", names);

    let numbers: [i32; 3] = [1, 2, 3];
    for n in numbers{
        println!("{}, {}", n, n+4);
    }

    println!("{:?}\n", numbers);

    // Using enumerate
    let en: [i32; 5] = [5, 4, 3, 2, 1];

    for (i, v) in en.iter().enumerate(){ // i = index, v = value
        println!("{} is at position {}", v, i);
    }
}
