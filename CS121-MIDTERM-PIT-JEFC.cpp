#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void Age() {
    int age;    
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "> You are: " << age << " years old of age." << endl;
}

void BMI() {
    double height, weight, bmi;
    
    cout << "Enter Height (in meters): ";
    cin >> height;
    cout << "Enter Weight (in kilograms): ";
    cin >> weight;
    
    bmi = (weight / (pow(height, 2)));
    
    cout << "BMI is: " << bmi << endl;
    
    if (bmi < 18.5) {
        cout << "> You are UNDERWEIGHT" << endl;

        cout << "\n// Life 100 Program Recommendations"
            "\n> EXERCISE/WORKOUT" << endl;

        cout << "\n1. Stretching - Start with gentle stretching exercises to improve flexibility"
                            "\nand prevent muscle stiffness. Include stretches for the major muscle groups,"
                            "\nsuch as legs, arms, neck, and back.\n"
            "\n2. Body Weight Exercise"
            "\n- squats"
            "\n- push ups"
            "\n- planks"
            "\n- wall sits\n"
            "\n3. Jog/walk - it is an excellent low-impact exercise that can be done at your"
            "\nown pace. It's suitable for people of all ages and fitness levels. You can"
            "\nstart with a gentle stroll and gradually increase your duration and speed.\n"
            "\n4. Yoga - it can help with flexibility, balance, and relaxation. There are"
            "\nbeginner-friendly yoga routines that focus on simple poses and breathing exercises." << endl;

        cout << "\n> HEALTH TIPS" << endl;
        cout << "\nHere are some health tips to help you lead a long and healthy life:" << endl;

        cout << "\n1. Maintain a Balanced Diet"
                "\n- Eat a variety of fruits, vegetables, whole grains, lean protein, and healthy fats."
                "\n- Limit processed foods, sugar, and excessive salt intake."
                "\n- Stay hydrated by drinking plenty of water.\n" << endl;
        cout << "2. Portion Control"
                "\n- Be mindful of portion sizes to avoid overeating, which can lead to weight gain and"
                "\nassociated health issues.\n" << endl;
        cout << "3. Regular Physical Activity"
                "\n- Incorporate regular exercise into your routine, including cardiovascular,"
                "\nstrength training, and flexibility exercises."
                "\n- Aim for at least 150 minutes of moderate-intensity aerobic activity per week.\n" << endl;
        cout << "4. Stress Management"
                "\n- Practice stress-reduction techniques such as meditation, deep breathing,"
                "\nor yoga to lower stress levels and improve mental well-being.\n" << endl;
        cout << "5. Adequate Sleep"
                "\n- Get at least 7-9 hours of quality sleep per night to allow your body to"
                "\nrest and recover.\n" << endl;
        cout << "6. Stay Socially Active"
                "\n- Maintain social connections with friends and family to reduce feelings of"
                "\nisolation and loneliness.\n" << endl;
        cout << "7. Regular Check-Ups"
                "\n- Visit your healthcare provider for regular check-ups and screenings to catch"
                "\npotential health issues early.\n" << endl;
        cout << "8. Mental Stimulation"
                "\n- Keep your mind active with activities such as puzzles, reading, or learning"
                "\nnew skills to maintain cognitive health.\n" << endl;
        cout << "9. Avoid Smoking and Excessive Alcohol"
                "\n- Quit smoking or avoid it altogether."
                "\n- Limit alcohol consumption to moderate levels, if at all.\n" << endl;
        cout << "10. Sun Protection"
                "\n- Protect your skin from the sun to prevent skin damage and skin cancer.\n" << endl;
        cout << "11. Stay Hydrated"
                "\n- Drink an adequate amount of water to support overall health and well-being.\n" << endl;
        cout << "12. Have a Purpose"
                "\n- Engage in activities that give you a sense of purpose and fulfillment."<< endl;

        cout << "\n> FOOD DIETS" << endl;
        cout << "\n1. Mediterranean Diet"
                "\nThe Mediterranean diet is often cited for its association with longevity."
                "\nThis diet is rich in antioxidants, fiber, and heart-healthy fats."
                "\nIt emphasizes:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Lean protein, including fish and legumes"
                "\n- Healthy fats, such as olive oil and nuts"
                "\n- Reduced red meat consumption"
                "\n- Moderate wine consumption (if appropriate and in moderation)\n" << endl;
        cout << "2. Plant-Based Diet"
                "\nPlant-based diets, such as vegetarian or vegan diets, are linked to longevity."
                "\nThese diets tend to be lower in saturated fats and cholesterol."
                "\nThey are high in:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Legumes"
                "\n- Nuts and seeds\n" << endl;
        cout << "3. High-Fiber Foods"
                "\n- Foods high in fiber, such as whole grains, oats, fruits, and vegetables,"
                "\ncan help maintain digestive health and reduce the risk of chronic diseases.\n" << endl;
        cout << "4. Fatty Fish"
                "\n- Fatty fish like salmon, mackerel, and sardines are rich in omega-3 fatty acids,"
                "\nwhich support heart health and reduce inflammation.\n" << endl;
        cout << "5. Antioxidant-Rich Foods"
                "\n- Foods rich in antioxidants, including berries, leafy greens, and nuts,"
                "\ncan help protect against cellular damage and lower the risk of chronic diseases.\n" << endl;
        cout << "6. Probiotic Foods"
                "\n- Fermented foods like yogurt, kefir, and sauerkraut can promote gut health"
                "\nand may have positive effects on the immune system.\n" << endl;
        cout << "7. Low Sugar Intake"
                "\n- Reducing sugar intake and avoiding sugary beverages can help prevent obesity and"
                "\nchronic diseases.\n" << endl;
        cout << "8. Limit Processed Foods"
                "\n- Minimize the consumption of highly processed and packaged foods, which often"
                "\ncontain unhealthy additives and excessive salt.\n" << endl;
    }
    
    else if (18.5 < bmi && bmi < 25.0) {
        cout << "> You are NORMAL" << endl;

        cout << "\n// Life 100 Program Recommendations"
            "\n> EXERCISE/WORKOUT" << endl;
        cout << "\n1. Stretching - Start with gentle stretching exercises to improve flexibility"
                            "\nand prevent muscle stiffness. Include stretches for the major muscle groups,"
                            "\nsuch as legs, arms, neck, and back.\n"
            "\n2. Body Weight Exercise"
            "\n- squats"
            "\n- push ups"
            "\n- planks"
            "\n- wall sits\n"
            "\n3. Jog/walk - it is an excellent low-impact exercise that can be done at your"
            "\nown pace. It's suitable for people of all ages and fitness levels. You can"
            "\nstart with a gentle stroll and gradually increase your duration and speed.\n"
            "\n4. Yoga - it can help with flexibility, balance, and relaxation. There are"
            "\nbeginner-friendly yoga routines that focus on simple poses and breathing exercises." << endl;

        cout << "\n> HEALTH TIPS" << endl;
        cout << "\nHere are some health tips to help you lead a long and healthy life:" << endl;

        cout << "\n1. Maintain a Balanced Diet"
                "\n- Eat a variety of fruits, vegetables, whole grains, lean protein, and healthy fats."
                "\n- Limit processed foods, sugar, and excessive salt intake."
                "\n- Stay hydrated by drinking plenty of water.\n" << endl;
        cout << "2. Portion Control"
                "\n- Be mindful of portion sizes to avoid overeating, which can lead to weight gain and"
                "\nassociated health issues.\n" << endl;
        cout << "3. Regular Physical Activity"
                "\n- Incorporate regular exercise into your routine, including cardiovascular,"
                "\nstrength training, and flexibility exercises."
                "\n- Aim for at least 150 minutes of moderate-intensity aerobic activity per week.\n" << endl;
        cout << "4. Stress Management"
                "\n- Practice stress-reduction techniques such as meditation, deep breathing,"
                "\nor yoga to lower stress levels and improve mental well-being.\n" << endl;
        cout << "5. Adequate Sleep"
                "\n- Get at least 7-9 hours of quality sleep per night to allow your body to"
                "\nrest and recover.\n" << endl;
        cout << "6. Stay Socially Active"
                "\n- Maintain social connections with friends and family to reduce feelings of"
                "\nisolation and loneliness.\n" << endl;
        cout << "7. Regular Check-Ups"
                "\n- Visit your healthcare provider for regular check-ups and screenings to catch"
                "\npotential health issues early.\n" << endl;
        cout << "8. Mental Stimulation"
                "\n- Keep your mind active with activities such as puzzles, reading, or learning"
                "\nnew skills to maintain cognitive health.\n" << endl;
        cout << "9. Avoid Smoking and Excessive Alcohol"
                "\n- Quit smoking or avoid it altogether."
                "\n- Limit alcohol consumption to moderate levels, if at all.\n" << endl;
        cout << "10. Sun Protection"
                "\n- Protect your skin from the sun to prevent skin damage and skin cancer.\n" << endl;
        cout << "11. Stay Hydrated"
                "\n- Drink an adequate amount of water to support overall health and well-being.\n" << endl;
        cout << "12. Have a Purpose"
                "\n- Engage in activities that give you a sense of purpose and fulfillment."<< endl;

        cout << "\n> FOOD DIETS" << endl;
        cout << "\n1. Mediterranean Diet"
                "\nThe Mediterranean diet is often cited for its association with longevity."
                "\nThis diet is rich in antioxidants, fiber, and heart-healthy fats."
                "\nIt emphasizes:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Lean protein, including fish and legumes"
                "\n- Healthy fats, such as olive oil and nuts"
                "\n- Reduced red meat consumption"
                "\n- Moderate wine consumption (if appropriate and in moderation)\n" << endl;
        cout << "2. Plant-Based Diet"
                "\nPlant-based diets, such as vegetarian or vegan diets, are linked to longevity."
                "\nThese diets tend to be lower in saturated fats and cholesterol."
                "\nThey are high in:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Legumes"
                "\n- Nuts and seeds\n" << endl;
        cout << "3. High-Fiber Foods"
                "\n- Foods high in fiber, such as whole grains, oats, fruits, and vegetables,"
                "\ncan help maintain digestive health and reduce the risk of chronic diseases.\n" << endl;
        cout << "4. Fatty Fish"
                "\n- Fatty fish like salmon, mackerel, and sardines are rich in omega-3 fatty acids,"
                "\nwhich support heart health and reduce inflammation.\n" << endl;
        cout << "5. Antioxidant-Rich Foods"
                "\n- Foods rich in antioxidants, including berries, leafy greens, and nuts,"
                "\ncan help protect against cellular damage and lower the risk of chronic diseases.\n" << endl;
        cout << "6. Probiotic Foods"
                "\n- Fermented foods like yogurt, kefir, and sauerkraut can promote gut health"
                "\nand may have positive effects on the immune system.\n" << endl;
        cout << "7. Low Sugar Intake"
                "\n- Reducing sugar intake and avoiding sugary beverages can help prevent obesity and"
                "\nchronic diseases.\n" << endl;
        cout << "8. Limit Processed Foods"
                "\n- Minimize the consumption of highly processed and packaged foods, which often"
                "\ncontain unhealthy additives and excessive salt.\n" << endl;
    }
    
    else if (25.0 < bmi && bmi < 30.0) {
        cout << "> You are OVERWEIGHT" << endl;

        cout << "\n// Life 100 Program Recommendations"
            "\n> EXERCISE/WORKOUT" << endl;
        cout << "\n1. Stretching - Start with gentle stretching exercises to improve flexibility"
                            "\nand prevent muscle stiffness. Include stretches for the major muscle groups,"
                            "\nsuch as legs, arms, neck, and back.\n"
            "\n2. Body Weight Exercise"
            "\n- squats"
            "\n- push ups"
            "\n- planks"
            "\n- wall sits\n"
            "\n3. Jog/walk - it is an excellent low-impact exercise that can be done at your"
            "\nown pace. It's suitable for people of all ages and fitness levels. You can"
            "\nstart with a gentle stroll and gradually increase your duration and speed.\n"
            "\n4. Yoga - it can help with flexibility, balance, and relaxation. There are"
            "\nbeginner-friendly yoga routines that focus on simple poses and breathing exercises." << endl;

        cout << "\n> HEALTH TIPS" << endl;
        cout << "\nHere are some health tips to help you lead a long and healthy life:" << endl;

        cout << "1. Maintain a Balanced Diet"
                "\n- Eat a variety of fruits, vegetables, whole grains, lean protein, and healthy fats."
                "\n- Limit processed foods, sugar, and excessive salt intake."
                "\n- Stay hydrated by drinking plenty of water.\n" << endl;
        cout << "2. Portion Control"
                "\n- Be mindful of portion sizes to avoid overeating, which can lead to weight gain and"
                "\nassociated health issues.\n" << endl;
        cout << "3. Regular Physical Activity"
                "\n- Incorporate regular exercise into your routine, including cardiovascular,"
                "\nstrength training, and flexibility exercises."
                "\n- Aim for at least 150 minutes of moderate-intensity aerobic activity per week.\n" << endl;
        cout << "4. Stress Management"
                "\n- Practice stress-reduction techniques such as meditation, deep breathing,"
                "\nor yoga to lower stress levels and improve mental well-being.\n" << endl;
        cout << "5. Adequate Sleep"
                "\n- Get at least 7-9 hours of quality sleep per night to allow your body to"
                "\nrest and recover.\n" << endl;
        cout << "6. Stay Socially Active"
                "\n- Maintain social connections with friends and family to reduce feelings of"
                "\nisolation and loneliness.\n" << endl;
        cout << "7. Regular Check-Ups"
                "\n- Visit your healthcare provider for regular check-ups and screenings to catch"
                "\npotential health issues early.\n" << endl;
        cout << "8. Mental Stimulation"
                "\n- Keep your mind active with activities such as puzzles, reading, or learning"
                "\nnew skills to maintain cognitive health.\n" << endl;
        cout << "9. Avoid Smoking and Excessive Alcohol"
                "\n- Quit smoking or avoid it altogether."
                "\n- Limit alcohol consumption to moderate levels, if at all.\n" << endl;
        cout << "10. Sun Protection"
                "\n- Protect your skin from the sun to prevent skin damage and skin cancer.\n" << endl;
        cout << "11. Stay Hydrated"
                "\n- Drink an adequate amount of water to support overall health and well-being.\n" << endl;
        cout << "12. Have a Purpose"
                "\n- Engage in activities that give you a sense of purpose and fulfillment."<< endl;

        cout << "\n> FOOD DIETS" << endl;
        cout << "\n1. Mediterranean Diet"
                "\nThe Mediterranean diet is often cited for its association with longevity."
                "\nThis diet is rich in antioxidants, fiber, and heart-healthy fats."
                "\nIt emphasizes:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Lean protein, including fish and legumes"
                "\n- Healthy fats, such as olive oil and nuts"
                "\n- Reduced red meat consumption"
                "\n- Moderate wine consumption (if appropriate and in moderation)\n" << endl;
        cout << "2. Plant-Based Diet"
                "\nPlant-based diets, such as vegetarian or vegan diets, are linked to longevity."
                "\nThese diets tend to be lower in saturated fats and cholesterol."
                "\nThey are high in:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Legumes"
                "\n- Nuts and seeds\n" << endl;
        cout << "3. High-Fiber Foods"
                "\n- Foods high in fiber, such as whole grains, oats, fruits, and vegetables,"
                "\ncan help maintain digestive health and reduce the risk of chronic diseases.\n" << endl;
        cout << "4. Fatty Fish"
                "\n- Fatty fish like salmon, mackerel, and sardines are rich in omega-3 fatty acids,"
                "\nwhich support heart health and reduce inflammation.\n" << endl;
        cout << "5. Antioxidant-Rich Foods"
                "\n- Foods rich in antioxidants, including berries, leafy greens, and nuts,"
                "\ncan help protect against cellular damage and lower the risk of chronic diseases.\n" << endl;
        cout << "6. Probiotic Foods"
                "\n- Fermented foods like yogurt, kefir, and sauerkraut can promote gut health"
                "\nand may have positive effects on the immune system.\n" << endl;
        cout << "7. Low Sugar Intake"
                "\n- Reducing sugar intake and avoiding sugary beverages can help prevent obesity and"
                "\nchronic diseases.\n" << endl;
        cout << "8. Limit Processed Foods"
                "\n- Minimize the consumption of highly processed and packaged foods, which often"
                "\ncontain unhealthy additives and excessive salt.\n" << endl;
    }
    
    else if (bmi > 30) {
        cout << "> You are OBESE" << endl;

        cout << "\n// Life 100 Program Recommendations"
            "\n> EXERCISE/WORKOUT" << endl;
        cout << 
            "\n1. Stretching - Start with gentle stretching exercises to improve flexibility"
            "\nand prevent muscle stiffness. Include stretches for the major muscle groups,"
            "\nsuch as legs, arms, neck, and back.\n"
            "\n2. Jog/walk - it is an excellent low-impact exercise that can be done at your"
            "\nown pace. It's suitable for people of all ages and fitness levels. You can start"
            "\nwith a gentle stroll and gradually increase your duration and speed.\n"
            "\n3. Seated Yoga - Seated yoga routines can be done in a chair or on the floor"
            "\nwith support. These routines emphasize gentle stretches and relaxation.\n"
            "\n4. Water Aerobics - Water aerobics in a pool provides buoyancy and support"
            "\nfor your body, reducing the impact on your joints. This is an excellent way"
            "\nto improve cardiovascular fitness and muscle strength.\n"
            "\n5. Low-Intensity Resistance Training - Use light weights or resistance bands"
            "\nto perform low-intensity strength training exercises. Focus on high repetitions"
            "\nwith low resistance to avoid straining muscles and joints.\n"
            "\n6. Breathing Exercises - Focus on deep breathing exercises to increase lung"
            "\ncapacity and reduce stress.\n"
            "\n7. Recumbent Bike - Using a recumbent stationary bike can provide a comfortable"
            "\nworkout experience with back support and minimal impact on the joints." << endl;

        cout << "\n> HEALTH TIPS" << endl;
        cout << "\nHere are some health tips to help you lead a long and healthy life:" << endl;

        cout << "\n1. Maintain a Balanced Diet"
                "\n- Eat a variety of fruits, vegetables, whole grains, lean protein, and healthy fats."
                "\n- Limit processed foods, sugar, and excessive salt intake."
                "\n- Stay hydrated by drinking plenty of water.\n" << endl;
        cout << "2. Portion Control"
                "\n- Be mindful of portion sizes to avoid overeating, which can lead to weight gain and"
                "\nassociated health issues.\n" << endl;
        cout << "3. Regular Physical Activity"
                "\n- Incorporate regular exercise into your routine, including cardiovascular,"
                "\nstrength training, and flexibility exercises."
                "\n- Aim for at least 150 minutes of moderate-intensity aerobic activity per week.\n" << endl;
        cout << "4. Stress Management"
                "\n- Practice stress-reduction techniques such as meditation, deep breathing,"
                "\nor yoga to lower stress levels and improve mental well-being.\n" << endl;
        cout << "5. Adequate Sleep"
                "\n- Get at least 7-9 hours of quality sleep per night to allow your body to"
                "\nrest and recover.\n" << endl;
        cout << "6. Stay Socially Active"
                "\n- Maintain social connections with friends and family to reduce feelings of"
                "\nisolation and loneliness.\n" << endl;
        cout << "7. Regular Check-Ups"
                "\n- Visit your healthcare provider for regular check-ups and screenings to catch"
                "\npotential health issues early.\n" << endl;
        cout << "8. Mental Stimulation"
                "\n- Keep your mind active with activities such as puzzles, reading, or learning"
                "\nnew skills to maintain cognitive health.\n" << endl;
        cout << "9. Avoid Smoking and Excessive Alcohol"
                "\n- Quit smoking or avoid it altogether."
                "\n- Limit alcohol consumption to moderate levels, if at all.\n" << endl;
        cout << "10. Sun Protection"
                "\n- Protect your skin from the sun to prevent skin damage and skin cancer.\n" << endl;
        cout << "11. Stay Hydrated"
                "\n- Drink an adequate amount of water to support overall health and well-being.\n" << endl;
        cout << "12. Have a Purpose"
                "\n- Engage in activities that give you a sense of purpose and fulfillment."<< endl;

        cout << "\n> FOOD DIETS" << endl;
        cout << "\n1. Mediterranean Diet"
                "\nThe Mediterranean diet is often cited for its association with longevity."
                "\nThis diet is rich in antioxidants, fiber, and heart-healthy fats."
                "\nIt emphasizes:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Lean protein, including fish and legumes"
                "\n- Healthy fats, such as olive oil and nuts"
                "\n- Reduced red meat consumption"
                "\n- Moderate wine consumption (if appropriate and in moderation)\n" << endl;
        cout << "2. Plant-Based Diet"
                "\nPlant-based diets, such as vegetarian or vegan diets, are linked to longevity."
                "\nThese diets tend to be lower in saturated fats and cholesterol."
                "\nThey are high in:"
                "\n- Fruits and vegetables"
                "\n- Whole grains"
                "\n- Legumes"
                "\n- Nuts and seeds\n" << endl;
        cout << "3. High-Fiber Foods"
                "\n- Foods high in fiber, such as whole grains, oats, fruits, and vegetables,"
                "\ncan help maintain digestive health and reduce the risk of chronic diseases.\n" << endl;
        cout << "4. Fatty Fish"
                "\n- Fatty fish like salmon, mackerel, and sardines are rich in omega-3 fatty acids,"
                "\nwhich support heart health and reduce inflammation.\n" << endl;
        cout << "5. Antioxidant-Rich Foods"
                "\n- Foods rich in antioxidants, including berries, leafy greens, and nuts,"
                "\ncan help protect against cellular damage and lower the risk of chronic diseases.\n" << endl;
        cout << "6. Probiotic Foods"
                "\n- Fermented foods like yogurt, kefir, and sauerkraut can promote gut health"
                "\nand may have positive effects on the immune system.\n" << endl;
        cout << "7. Low Sugar Intake"
                "\n- Reducing sugar intake and avoiding sugary beverages can help prevent obesity and"
                "\nchronic diseases.\n" << endl;
        cout << "8. Limit Processed Foods"
                "\n- Minimize the consumption of highly processed and packaged foods, which often"
                "\ncontain unhealthy additives and excessive salt.\n" << endl;
}

}

int main() {
    while(true) {
        int choice;

        cout << "Life 100 | to infinity and beyond" << endl;
    cout << " > \"A journey to a long life experience\"" << endl;

    cout << "\nGREETINGS: " 
        "\nWelcome to our Dearest and Fellow Human Being, soon to be SuperHuman" << endl;

    cout << "\nINTRODUCTION: " \
        "\nIn a world that's constantly evolving, with advances in science, technology, " 
        "\nand healthcare, we have an unprecedented opportunity to extend and " 
        "\nenhance the quality of our lives. The aspiration of living " 
        "\nto one hundred years old is no longer a mere dream " 
        "\nbut a realistic goal within reach. It's a journey that's not just " 
        "\nabout adding years to our life but adding life to our years. " 
        "\nOur collective quest to promote longevity is not only a celebration " 
        "\nof aging but a testament to the potential of the human spirit. " 
        "\nJoin us on this inspiring journey as we explore the keys to unlocking a " 
        "\ncentury of vibrant living and discover the secrets to achieving that " 
        "\nthat cherished milestone of a hundred years." << endl;

    cout << "\nDisclaimer: \"For Education Purposes Only\"" << endl;

    cout << "\nLife 100 | to infinity and beyond " 
        "\nCONTENTS: " 
        "\n> Overall Health Check"
          "\n - Personal physical information"
          "\n - Body mass index"
          "\n - Exercise/workout"
          "\n - Health Tips"
          "\n - Food Diets" << endl;

        string firstName, lastName;

        cout << "\n// Life 100: Personal Information" << endl;
        cout << "Enter your name: ";
        cin >> firstName, lastName;
        Age();

        cout << "\n// Life 100: Body Mass Index (BMI)"
        "\n-------------------------------------------------" 
                    "\nUnderweight: BMI less than 18.5 " 
                    "\nNormal Weight: BMI between 18.5 and 24.9 " 
                    "\nOverweight: BMI between 25 and 29.9 " 
                    "\nObesity: BMI between 30 or higher " 
                    "\n-------------------------------------------------" << endl;

        BMI();

        cout << "Do you want to make another evaluation? "
            "\n[1]Continue | [0]Exit "
            "\nInput: ";
        cin >> choice;
        if (choice == 0) {
            cout << "Exiting... Thank you for using Life 100.";
            break;
        }
    }
    
return 0;
}