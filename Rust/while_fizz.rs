fn main(){
    let mut n: i32 = 1;

    while n <= 10 { 
        if n % 15 == 0{
            println!("fizzbuzz");
        }
        else if n % 5 == 0 {
            println!("buzz");
        }
        else if n % 3 == 0 {
            println!("fizz");
        }
        else{
            println!("{}", n);
        }
        
        n += 1;
        // n++ is not valid
    }
    println!("End of loop 1; n = {}\n", n);

    while n>5 {
        println!("{}", n);
        if n == 6{
            println!("n = 6, breaking");
        } 
        n -= 1;
    }
}
