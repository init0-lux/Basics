fn main(){
    let n: i32 = 5;

    if n < 0 { 
        println!("{} is negative; if", n);
    }
    else if n > 5 { 
        println!("{} is positive; else if", n);
    }
    else { 
        println!("{} is negative; else", n);
    }

    let new_n =
        if n < 10 && n > -10 {
            println!("control will go here. next line assigned because no ;");
            10 * n
        }
        else {
            println!("control won't go here");
            n/2.0 as i32
        };

    println!("new_n = {}", new_n);
}
